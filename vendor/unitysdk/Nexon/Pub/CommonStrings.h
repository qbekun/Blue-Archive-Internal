#pragma once
#include "../../unitysdk.h"

#define NEXON_PUB_COMMONSTRINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9549B40)

namespace Nexon::Pub
{
	inline static constexpr unsigned int CommonStrings_TypeDefinitionIndex = 37530;

	class CommonStrings : public Il2CppObject
	{
	public:
		::System::String* FileNotFound; // 0x0
		::System::String* LoadAssetBundleFail; // 0x8
		::System::String* SDKInitFirst; // 0x10
		::System::String* SDKAlreadyStarted; // 0x18
		::System::String* MissingConfig; // 0x20
		::System::String* NotSupportedPlatform; // 0x28
		::System::String* CheckVersionResultOnResultDelegateIsNull; // 0x30
		::System::String* CheckVersionResultOnProgressDelegateIsNull; // 0x38
		::System::String* CheckVersionResultOnErrorDelegateIsNull; // 0x40
		::System::String* DownloadResultOnProgressDelegateIsNull; // 0x48
		::System::String* DownloadResultOnDownloadedDelegateIsNull; // 0x50
		::System::String* DownloadResultOnCompleteDelegateIsNull; // 0x58
		::System::String* DownloadResultOnStopDelegateIsNull; // 0x60
		::System::String* DownloadResultOnErrorDelegateIsNull; // 0x68
		::System::String* DEFAULT_GROUP; // 0x70

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_COMMONSTRINGS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

