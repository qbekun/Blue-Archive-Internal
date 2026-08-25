#pragma once
#include "../unitysdk.h"

class EntityCompositionData;
namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCBREAKABLE_SET_ISBROKEN_OFFSET UNITYSDK_OFFSET(0xD88380)
#define MXUNDERCOVER_UCBREAKABLE_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xD88390)
#define MXUNDERCOVER_UCBREAKABLE_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD883F0)
#define MXUNDERCOVER_UCBREAKABLE_EXECUTEBREAKINTERNAL_OFFSET UNITYSDK_OFFSET(0xD88400)
#define MXUNDERCOVER_UCBREAKABLE_GET_ISBROKEN_OFFSET UNITYSDK_OFFSET(0xD886F0)
#define MXUNDERCOVER_UCBREAKABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD88700)
#define MXUNDERCOVER_UCBREAKABLE_REBIND_OFFSET UNITYSDK_OFFSET(0xD88710)
#define MXUNDERCOVER_UCBREAKABLE_EXECUTEBREAK_OFFSET UNITYSDK_OFFSET(0xD88720)
#define MXUNDERCOVER_UCBREAKABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD88730)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBreakable_TypeDefinitionIndex = 9689;

	class UCBreakable : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* EntityColliders; // 0x30
		::System::Boolean _IsBroken_k__BackingField; // 0x38

		::System::Void set_IsBroken(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBREAKABLE_SET_ISBROKEN_OFFSET))(arg, nullptr);
		}

		EntityCompositionData* SyncToModel()
		{
			return ((EntityCompositionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBREAKABLE_SYNCTOMODEL_OFFSET))(nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBREAKABLE_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void ExecuteBreakInternal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBREAKABLE_EXECUTEBREAKINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsBroken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBREAKABLE_GET_ISBROKEN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBREAKABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Rebind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBREAKABLE_REBIND_OFFSET))(nullptr);
		}

		::System::Void ExecuteBreak()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBREAKABLE_EXECUTEBREAK_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg, EntityCompositionData* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, EntityCompositionData*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBREAKABLE_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

