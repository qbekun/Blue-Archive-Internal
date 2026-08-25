#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_SAVEDATA_BATTLEPLAYGUIDEDISPLAYSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D250C0)
#define MX_SAVEDATA_BATTLEPLAYGUIDEDISPLAYSAVEDATA_HASDATA_OFFSET UNITYSDK_OFFSET(0x1D250D0)
#define MX_SAVEDATA_BATTLEPLAYGUIDEDISPLAYSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D25160)
#define MX_SAVEDATA_BATTLEPLAYGUIDEDISPLAYSAVEDATA_ADD_OFFSET UNITYSDK_OFFSET(0x1D251E0)
#define MX_SAVEDATA_BATTLEPLAYGUIDEDISPLAYSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D25400)
#define MX_SAVEDATA_BATTLEPLAYGUIDEDISPLAYSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D256C0)

namespace MX::SaveData
{
	inline static constexpr unsigned int BattlePlayGuideDisplaySaveData_TypeDefinitionIndex = 20004;

	class BattlePlayGuideDisplaySaveData : public Il2CppObject
	{
	public:
		Il2CppObject* BattlePlayGuideDisplayDic; // 0x10

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_BATTLEPLAYGUIDEDISPLAYSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean HasData(::FlatData::ContentType* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_BATTLEPLAYGUIDEDISPLAYSAVEDATA_HASDATA_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_BATTLEPLAYGUIDEDISPLAYSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(::FlatData::ContentType* arg, ::System::String* str)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_BATTLEPLAYGUIDEDISPLAYSAVEDATA_ADD_OFFSET))(arg, str, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_BATTLEPLAYGUIDEDISPLAYSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_BATTLEPLAYGUIDEDISPLAYSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

