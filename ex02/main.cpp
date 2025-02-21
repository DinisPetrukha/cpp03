#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "\n===== TESTE: Criando FragTrap =====\n";
    FragTrap frag("Fraggy");

    std::cout << "\n===== TESTE: Ataque =====\n";
    frag.attack("inimigo");

    std::cout << "\n===== TESTE: Recebendo dano =====\n";
    frag.takeDamage(30);

    std::cout << "\n===== TESTE: Reparo =====\n";
    frag.beRepaired(20);

    std::cout << "\n===== TESTE: Alteração de atributos via Setters =====\n";
    frag.attack_damage_setter(50);
    std::cout << "Novo ataque do FragTrap: " << frag.attack_damage_getter() << " de dano.\n";

    std::cout << "\n===== TESTE: Gastando toda a energia =====\n";
    for (int i = 0; i < 102; i++) {
        frag.attack("alvo");
    }

    std::cout << "\n===== TESTE: Tentando atacar sem energia =====\n";
    frag.attack("alvo");

    std::cout << "\n===== TESTE: FragTrap pede High Fives =====\n";
    frag.highFivesGuys();

    std::cout << "\n===== TESTE: FragTrap morre =====\n";
    frag.takeDamage(200);
    frag.attack("alvo");  // Deve falhar porque o FragTrap morreu

    std::cout << "\n===== FIM DOS TESTES =====\n";
    return 0;
}
