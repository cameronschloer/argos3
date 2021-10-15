#ifndef TEST_LOOP_FUNCTIONS_H
#define TEST_LOOP_FUNCTIONS_H

namespace argos {
   class CEmbodiedEntity;
}

#include <argos3/core/simulator/loop_functions.h>

namespace argos {

   class CTestLoopFunctions : public CLoopFunctions {

   public:

      CTestLoopFunctions() {}

      virtual ~CTestLoopFunctions() {}

      virtual bool IsExperimentFinished() override;

   private:

      static const CVector3 TARGET_POSITION;
      static const Real TARGET_THRESHOLD;

   };
}

#endif

