struct UnionFind {
  vector<int> data;
  UnionFind(int size) : data(size, -1) {}

  int root(int x) {
    if (data[x] < 0)
      return x;
    else
      return data[x] = root(data[x]);
  }

  int size(int x) { return -data[root(x)]; }

  bool isConnect(int x, int y) { return root(x) == root(y); }

  bool connect(int x, int y) {
    x = root(x);
    y = root(y);

    if (x == y)
      return false;

    if (data[x] > data[y]) {
      x ^= y;
      y ^= x;
      x ^= y;
    }

    data[x] = data[x] + data[y]; // membersize++
    data[y] = x;
    return true;
  }
};
