#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "\n===== TESTE: Criando ClapTrap e ScavTrap =====\n";
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavy");

    std::cout << "\n===== TESTE: Ataque =====\n";
    clap.attack("inimigo");
    scav.attack("inimigo");

    std::cout << "\n===== TESTE: Recebendo dano =====\n";
    clap.takeDamage(5);
    scav.takeDamage(30);

    std::cout << "\n===== TESTE: Reparo =====\n";
    clap.beRepaired(3);
    scav.beRepaired(10);

	std::cout << "\n===== TESTE: Recebendo dano =====\n";
    clap.takeDamage(10000);
    scav.takeDamage(10000);

	std::cout << "\n===== TESTE: Tentando atacar sem 'hit points' =====\n";
	clap.attack("INIMIGO LIMÃO\n");
	scav.attack("INIMIGO LIMÃO\n");

    std::cout << "\n===== TESTE: Alteração de status via Setters =====\n";
    clap.attack_damage_setter(5);
    scav.attack_damage_setter(25);
    std::cout << "Novo ataque do ClapTrap: " << clap.attack_damage_getter() << " de dano.\n";
    std::cout << "Novo ataque do ScavTrap: " << scav.attack_damage_getter() << " de dano.\n";

	clap.hit_points_setter(10000);
	scav.hit_points_setter(10000);
	std::cout << "Setting life of clap to 10000" << std::endl;
	std::cout << "Setting life of scav to 10000" << std::endl;

    std::cout << "\n===== TESTE: Gastando toda a energia =====\n";
    for (int i = 0; i < 12; i++) {
        clap.attack("alvo");
    }
    for (int i = 0; i < 52; i++) {
        scav.attack("alvo");
    }

    std::cout << "\n===== TESTE: Tentando atacar sem energia =====\n";
    clap.attack("alvo");
    scav.attack("alvo");

    std::cout << "\n===== TESTE: ScavTrap entra no modo Gate Keeper =====\n";
    scav.guardGate();

    std::cout << "\n===== TESTE: ClapTrap morre =====\n";
    clap.takeDamage(20);
    clap.attack("alvo");  // Deve falhar porque o ClapTrap morreu

    std::cout << "\n===== TESTE: ScavTrap morre =====\n";
    scav.takeDamage(200);
    scav.attack("alvo");  // Deve falhar porque o ScavTrap morreu

    std::cout << "\n===== FIM DOS TESTES =====\n";
    return 0;
}
