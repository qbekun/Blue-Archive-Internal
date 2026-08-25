#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_ATTACHMENTSORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA990)
#define MX_SAVEDATA_ATTACHMENTSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFA9A0)
#define MX_SAVEDATA_ATTACHMENTSORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFA9B0)
#define MX_SAVEDATA_ATTACHMENTSORTINGSAVEDATA_CHANGEEMBLEMRULE_OFFSET UNITYSDK_OFFSET(0x1CFAA20)
#define MX_SAVEDATA_ATTACHMENTSORTINGSAVEDATA_CHANGEEMBLEMORDER_OFFSET UNITYSDK_OFFSET(0x1CFAA50)
#define MX_SAVEDATA_ATTACHMENTSORTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFAA70)

namespace MX::SaveData
{
	inline static constexpr unsigned int AttachmentSortingSaveData_TypeDefinitionIndex = 19941;

	class AttachmentSortingSaveData : public Il2CppObject
	{
	public:
		SortingRule* EmblemSortingRule; // 0x10
		SortingOrder* EmblemSortingOrder; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTSORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTSORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void ChangeEmblemRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTSORTINGSAVEDATA_CHANGEEMBLEMRULE_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeEmblemOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTSORTINGSAVEDATA_CHANGEEMBLEMORDER_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTSORTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

