#pragma once
#include "unitysdk.h"

class UIEmblemParcel;
class UILabel;
class EmblemLoadInfo;

#define UIPOPUP_EMBLEMINFO_SETEMBLEM_OFFSET UNITYSDK_OFFSET(0x23EAE00)
#define UIPOPUP_EMBLEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x23EC2F0)

	inline static constexpr unsigned int UIPopup_EmblemInfo_TypeDefinitionIndex = 5404;

	class UIPopup_EmblemInfo : public Il2CppObject
	{
	public:
		UIEmblemParcel* Emblem; // 0xD8
		UILabel* Name; // 0xE0
		UILabel* Description; // 0xE8

		::System::Void SetEmblem(EmblemLoadInfo* arg)
		{
			((::System::Void(*)(EmblemLoadInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMINFO_SETEMBLEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMINFO_.CTOR_OFFSET))(nullptr);
		}

	};

