#pragma once
#include "../unitysdk.h"

class EntityCompositionData;
namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCSCANNABLE_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xD887F0)
#define MXUNDERCOVER_UCSCANNABLE_SCANDETECTING_OFFSET UNITYSDK_OFFSET(0xD88850)
#define MXUNDERCOVER_UCSCANNABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD888A0)
#define MXUNDERCOVER_UCSCANNABLE_SET_ISSCANNED_OFFSET UNITYSDK_OFFSET(0xD888B0)
#define MXUNDERCOVER_UCSCANNABLE_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD888C0)
#define MXUNDERCOVER_UCSCANNABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD888D0)
#define MXUNDERCOVER_UCSCANNABLE_REBIND_OFFSET UNITYSDK_OFFSET(0xD88990)
#define MXUNDERCOVER_UCSCANNABLE_GET_ISSCANNED_OFFSET UNITYSDK_OFFSET(0xD889A0)
#define MXUNDERCOVER_UCSCANNABLE_SCANEXECUTE_OFFSET UNITYSDK_OFFSET(0xD889B0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCScannable_TypeDefinitionIndex = 9690;

	class UCScannable : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* EnableTargetObjects; // 0x30
		::System::Boolean _IsScanned_k__BackingField; // 0x38

		EntityCompositionData* SyncToModel()
		{
			return ((EntityCompositionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSCANNABLE_SYNCTOMODEL_OFFSET))(nullptr);
		}

		::System::Void ScanDetecting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSCANNABLE_SCANDETECTING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSCANNABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsScanned(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSCANNABLE_SET_ISSCANNED_OFFSET))(arg, nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSCANNABLE_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg, EntityCompositionData* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, EntityCompositionData*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSCANNABLE_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Rebind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSCANNABLE_REBIND_OFFSET))(nullptr);
		}

		::System::Boolean get_IsScanned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSCANNABLE_GET_ISSCANNED_OFFSET))(nullptr);
		}

		::System::Void ScanExecute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSCANNABLE_SCANEXECUTE_OFFSET))(nullptr);
		}

	};
}

