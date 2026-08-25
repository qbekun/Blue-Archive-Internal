#pragma once
#include "unitysdk.h"

namespace FlatData { class ParcelType; }

#define UIATTENDANCESLOT_TYPE2_SETEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x2216330)
#define UIATTENDANCESLOT_TYPE2_AWAKE_OFFSET UNITYSDK_OFFSET(0x22163C0)
#define UIATTENDANCESLOT_TYPE2_SET_OFFSET UNITYSDK_OFFSET(0x2216450)
#define UIATTENDANCESLOT_TYPE2_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x22165D0)
#define UIATTENDANCESLOT_TYPE2_.CTOR_OFFSET UNITYSDK_OFFSET(0x22167F0)

	inline static constexpr unsigned int UIAttendanceSlot_Type2_TypeDefinitionIndex = 4384;

	class UIAttendanceSlot_Type2 : public Il2CppObject
	{
	public:
		::System::Void SetEquipment(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCESLOT_TYPE2_SETEQUIPMENT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCESLOT_TYPE2_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::FlatData::ParcelType* arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCESLOT_TYPE2_SET_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void OnComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCESLOT_TYPE2_ONCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCESLOT_TYPE2_.CTOR_OFFSET))(nullptr);
		}

	};

