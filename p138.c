//Print all enum names and integer values using a loop.
#include <stdio.h>
enum UserRole {
    ADMIN,
    USER,
    GUEST
};
int main() {
    enum UserRole role;
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};
    printf("User Roles and their integer values:\n");
    for (role = ADMIN; role <= GUEST; role++) 
        printf("%s = %d\n", roleNames[role], role);
    return 0;
}
