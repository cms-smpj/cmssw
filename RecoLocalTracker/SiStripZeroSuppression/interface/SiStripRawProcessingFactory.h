#ifndef RecoLocalTracker_SiStripRawProcessingFactory_h
#define RecoLocalTracker_SiStripRawProcessingFactory_h

namespace edm {class ParameterSet;}
class SiStripFedZeroSuppression;
class SiStripPedestalsSubtractor;
class SiStripCommonModeNoiseSubtractor;
#include <memory>

class SiStripRawProcessingFactory {

 public:

  static std::auto_ptr<SiStripFedZeroSuppression> create_Suppressor(const edm::ParameterSet&);
  static std::auto_ptr<SiStripPedestalsSubtractor> create_SubtractorPed(const edm::ParameterSet&);
  static std::auto_ptr<SiStripCommonModeNoiseSubtractor> create_SubtractorCMN(const edm::ParameterSet&);

};
#endif
