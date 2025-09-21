#include <stdio.h>

int calculateDamage(int strength, float multiplier, int agility) {
    return (int) (strength * multiplier + agility / 2); // Cast float result to int
}

void printStatus(int health, int strength, int damage, int agility) {
    printf("Hello: Carl\n");
    printf("Health: %d\n", health);
    printf("Strength: %d\n", strength);
    printf("Agility: %d\n", agility);
    printf("Damage per Hit: %d\n", damage);
    if (health > 50) {
        printf("Status: Ready to fight!\n");
    } else {
        printf("Status: Needs healing!\n");
    }
}

int main(void) {
    // Initialise Carl's stats
    int health = 100;
    int strength = 10;
    int damageMultiplier = 1.5f;
    int agility = 8;

    // Calculate damage
    int damage = calculateDamage(strength, damageMultiplier, agility);

    // Print status
    printStatus(health, strength, damage, agility);

    // Simulate one attack
    int enemyHealth = 30;

    for (int i = 0; i < 3; i++) {
        printf("\nCarl attacks a goblin!\n");
        enemyHealth -= damage;
        if (enemyHealth <= 0) {
            printf("Goblin defeated! Carl finds an Enchanted Donut!\n");
        } else {
            printf("Goblin survives with %d health!\n", enemyHealth);
        }
    }

    return 0;
}
