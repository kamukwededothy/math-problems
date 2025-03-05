<code class="language-cpp">
int main() {
   // Generate a random number between 1 and 10
   int num = rand() % 10 + 1;
   
   // Ask the user for an input
   cout << "Guess a number between 1 and 10: ";
   cin >> guess;
   
   // Check if the user's input is equal to the generated number
   if (guess == num) {
      cout << "You won!";
   } else {
      cout << "You lost.";
   }
   
   return 0;
}
</code>