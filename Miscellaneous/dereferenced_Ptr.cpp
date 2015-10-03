// phantom is deallocated when myFunc exits, so the pointer
// the function returns is invalid
int *myFunc()
{
  int phantom = 4;
  return &phantom;
}

int y;
int &x = y; // Makes 'x' a reference to, or alias of 'y'
            // After these declarations, changing 'x' will change 'y' and
            // vice versa, because they are two names for the same thing