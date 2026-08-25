#pragma once
#include "../../unitysdk.h"

namespace FlatData { class Difficulty; }

#define MX_DATA_RAIDSKILLDESCRIPTIONLISTDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x1930EE0)
#define MX_DATA_RAIDSKILLDESCRIPTIONLISTDATA_GETEXCEL_OFFSET UNITYSDK_OFFSET(0x1930F20)
#define MX_DATA_RAIDSKILLDESCRIPTIONLISTDATA_GETEXCEL_OFFSET UNITYSDK_OFFSET(0x1930FE0)
#define MX_DATA_RAIDSKILLDESCRIPTIONLISTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1931160)

namespace MX::Data
{
	inline static constexpr unsigned int RaidSkillDescriptionListData_TypeDefinitionIndex = 16330;

	class RaidSkillDescriptionListData : public Il2CppObject
	{
	public:
		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSKILLDESCRIPTIONLISTDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetExcel(::System::String* str, ::FlatData::Difficulty* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSKILLDESCRIPTIONLISTDATA_GETEXCEL_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetExcel(::System::String* str, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSKILLDESCRIPTIONLISTDATA_GETEXCEL_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSKILLDESCRIPTIONLISTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

