std::string crypt(std::string mystr, int key){
  std::string crypted = mystr;
  for (int i = 0; i < mystr.size() + 1; ++i)
  {
    crypted[i] = crypted[i] + key;
  }
  return crypted;
};
std::string encrypt(std::string mystr, int key){
  std::string encrypted = mystr;
  for (int i = 0; i < mystr.size() + 1; ++i)
  {
    encrypted[i] = encrypted[i] - key;
  }
  return encrypted;
};