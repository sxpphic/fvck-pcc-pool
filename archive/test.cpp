#include <iostream>
#include <stack>

template <typename T>
class StackWithIterators : public std::stack<T> {
public:
    // Definindo um alias para o tipo de dados armazenado na pilha
    using value_type = typename std::stack<T>::value_type;

    // Iterador para percorrer do topo ao fundo
    class TopToBottomIterator {
    public:
        explicit TopToBottomIterator(StackWithIterators<T>& stack) : stack_(stack) {
            current_ = &stack_.top();
        }

        TopToBottomIterator& operator++() {
            current_ = current_->next;
            return *this;
        }

        bool operator!=(const TopToBottomIterator& other) const {
            return current_ != other.current_;
        }

        value_type& operator*() const {
            return current_->value;
        }

    private:
        typename StackWithIterators<T>::container_type::value_type* current_;
        StackWithIterators<T>& stack_;
    };

    // Funções para obter iteradores
    TopToBottomIterator begin() {
        return TopToBottomIterator(*this);
    }

    TopToBottomIterator end() {
        return TopToBottomIterator(*this);
    }

private:
    // Defina os nós da pilha para uso interno dos iteradores
    struct Node {
        Node(const value_type& value) : value(value), next(nullptr) {}
        value_type value;
        Node* next;
    };
};

int main() {
    StackWithIterators<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    for (const auto& item : myStack) {
        std::cout << item << " ";
    }

    return 0;
}
