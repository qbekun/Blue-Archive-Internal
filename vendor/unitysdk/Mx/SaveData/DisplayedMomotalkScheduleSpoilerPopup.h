#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_DISPLAYEDMOMOTALKSCHEDULESPOILERPOPUP_ADD_OFFSET UNITYSDK_OFFSET(0x1D00640)
#define MX_SAVEDATA_DISPLAYEDMOMOTALKSCHEDULESPOILERPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D00700)
#define MX_SAVEDATA_DISPLAYEDMOMOTALKSCHEDULESPOILERPOPUP_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D00780)
#define MX_SAVEDATA_DISPLAYEDMOMOTALKSCHEDULESPOILERPOPUP_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D00800)
#define MX_SAVEDATA_DISPLAYEDMOMOTALKSCHEDULESPOILERPOPUP_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D00810)
#define MX_SAVEDATA_DISPLAYEDMOMOTALKSCHEDULESPOILERPOPUP_CLONE_OFFSET UNITYSDK_OFFSET(0x1D00860)

namespace MX::SaveData
{
	inline static constexpr unsigned int DisplayedMomotalkScheduleSpoilerPopup_TypeDefinitionIndex = 19968;

	class DisplayedMomotalkScheduleSpoilerPopup : public Il2CppObject
	{
	public:
		Il2CppObject* DisplayedMomotalkScheduleSpoilerPopupIdList; // 0x10

		::System::Void Add(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDMOMOTALKSCHEDULESPOILERPOPUP_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDMOMOTALKSCHEDULESPOILERPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDMOMOTALKSCHEDULESPOILERPOPUP_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDMOMOTALKSCHEDULESPOILERPOPUP_VALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDMOMOTALKSCHEDULESPOILERPOPUP_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDMOMOTALKSCHEDULESPOILERPOPUP_CLONE_OFFSET))(nullptr);
		}

	};
}

