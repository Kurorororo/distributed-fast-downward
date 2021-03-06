#ifndef JINNAI_HEURISTIC_H
#define JINNAI_HEURISTIC_H

#include "heuristic.h"

class JinnaiHeuristic : public Heuristic {
private:
  bool robby;
  int left;
  int right;
  int free;
  int offset;

protected:
    virtual void initialize();
    virtual int compute_heuristic(const State &state);
public:
    JinnaiHeuristic(const Options &options);
    ~JinnaiHeuristic();
};

#endif
