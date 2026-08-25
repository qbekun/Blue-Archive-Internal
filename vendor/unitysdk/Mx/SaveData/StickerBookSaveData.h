#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_STICKERBOOKSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D03AA0)
#define MX_SAVEDATA_STICKERBOOKSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D03AB0)
#define MX_SAVEDATA_STICKERBOOKSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D03B10)
#define MX_SAVEDATA_STICKERBOOKSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D03B20)

namespace MX::SaveData
{
	inline static constexpr unsigned int StickerBookSaveData_TypeDefinitionIndex = 19986;

	class StickerBookSaveData : public Il2CppObject
	{
	public:
		::System::Boolean SkipStickerUseAni; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_STICKERBOOKSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_STICKERBOOKSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_STICKERBOOKSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_STICKERBOOKSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

