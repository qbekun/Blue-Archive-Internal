#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_ATTACHMENTSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D02D70)
#define MX_SAVEDATA_ATTACHMENTSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D02D80)
#define MX_SAVEDATA_ATTACHMENTSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D02DF0)
#define MX_SAVEDATA_ATTACHMENTSAVEDATA_SAVECONFIRMEDEMBLEM_OFFSET UNITYSDK_OFFSET(0x1D02E70)
#define MX_SAVEDATA_ATTACHMENTSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D03150)

namespace MX::SaveData
{
	inline static constexpr unsigned int AttachmentSaveData_TypeDefinitionIndex = 19982;

	class AttachmentSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* EmblemIds; // 0x10

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SaveConfirmedEmblem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTSAVEDATA_SAVECONFIRMEDEMBLEM_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

