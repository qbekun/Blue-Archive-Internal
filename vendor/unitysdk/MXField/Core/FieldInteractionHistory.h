#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Model { class FieldInteractionDB; }
namespace MXField::Core::Save { class FieldSaveSO; }
namespace MXField::Shared::Data { class FieldInteractionInfo; }

#define MXFIELD_CORE_FIELDINTERACTIONHISTORY_GET_INTERACTIONHISTORIES_OFFSET UNITYSDK_OFFSET(0xED59E0)
#define MXFIELD_CORE_FIELDINTERACTIONHISTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xED5B90)
#define MXFIELD_CORE_FIELDINTERACTIONHISTORY_ISHISTORY_OFFSET UNITYSDK_OFFSET(0xED5BA0)
#define MXFIELD_CORE_FIELDINTERACTIONHISTORY_ADDTALKHISTORY_OFFSET UNITYSDK_OFFSET(0xED5CD0)
#define MXFIELD_CORE_FIELDINTERACTIONHISTORY_GET_SAVESO_OFFSET UNITYSDK_OFFSET(0xED5B10)
#define MXFIELD_CORE_FIELDINTERACTIONHISTORY__GET_INTERACTIONHISTORIES_B__5_0_OFFSET UNITYSDK_OFFSET(0xED5E30)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldInteractionHistory_TypeDefinitionIndex = 10945;

	class FieldInteractionHistory : public Il2CppObject
	{
	public:
		Il2CppObject* get_InteractionHistories()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDINTERACTIONHISTORY_GET_INTERACTIONHISTORIES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDINTERACTIONHISTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsHistory(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDINTERACTIONHISTORY_ISHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void AddTalkHistory(::MXField::Shared::Model::FieldInteractionDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldInteractionDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDINTERACTIONHISTORY_ADDTALKHISTORY_OFFSET))(arg, nullptr);
		}

		::MXField::Core::Save::FieldSaveSO* get_SaveSO()
		{
			return ((::MXField::Core::Save::FieldSaveSO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDINTERACTIONHISTORY_GET_SAVESO_OFFSET))(nullptr);
		}

		::System::Boolean _get_InteractionHistories_b__5_0(::MXField::Shared::Data::FieldInteractionInfo* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Data::FieldInteractionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDINTERACTIONHISTORY__GET_INTERACTIONHISTORIES_B__5_0_OFFSET))(arg, nullptr);
		}

	};
}

