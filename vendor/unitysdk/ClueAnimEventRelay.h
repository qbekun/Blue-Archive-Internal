#pragma once
#include "unitysdk.h"

class UIEventContentClueBaseView;

#define CLUEANIMEVENTRELAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x24902B0)
#define CLUEANIMEVENTRELAY_RELEASEDEFERREDCLUELINES_OFFSET UNITYSDK_OFFSET(0x24902C0)

	inline static constexpr unsigned int ClueAnimEventRelay_TypeDefinitionIndex = 5725;

	class ClueAnimEventRelay : public Il2CppObject
	{
	public:
		UIEventContentClueBaseView* targetView; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLUEANIMEVENTRELAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ReleaseDeferredClueLines()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLUEANIMEVENTRELAY_RELEASEDEFERREDCLUELINES_OFFSET))(nullptr);
		}

	};

