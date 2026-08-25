#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define IBULLETTIMECANCELRECEIVER_ONCANCELBULLETTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define IBULLETTIMECANCELRECEIVER_GETCANCELTARGET_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IBulletTimeCancelReceiver_TypeDefinitionIndex = 4417;

	class IBulletTimeCancelReceiver : public Il2CppObject
	{
	public:
		::System::Void OnCancelBulletTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBULLETTIMECANCELRECEIVER_ONCANCELBULLETTIME_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* GetCancelTarget()
		{
			return ((::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBULLETTIMECANCELRECEIVER_GETCANCELTARGET_OFFSET))(nullptr);
		}

	};

