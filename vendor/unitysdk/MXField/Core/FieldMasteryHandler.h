#pragma once
#include "../../unitysdk.h"

namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_CORE_FIELDMASTERYHANDLER_START_OFFSET UNITYSDK_OFFSET(0xED6C20)
#define MXFIELD_CORE_FIELDMASTERYHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xED6D40)
#define MXFIELD_CORE_FIELDMASTERYHANDLER_RESERVEMASTERYUP_OFFSET UNITYSDK_OFFSET(0xED6D50)
#define MXFIELD_CORE_FIELDMASTERYHANDLER_HANDLEMASTERYCHANGED_OFFSET UNITYSDK_OFFSET(0xED6E20)
#define MXFIELD_CORE_FIELDMASTERYHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xED7100)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldMasteryHandler_TypeDefinitionIndex = 10950;

	class FieldMasteryHandler : public Il2CppObject
	{
	public:
		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDMASTERYHANDLER_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDMASTERYHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ReserveMasteryUp(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDMASTERYHANDLER_RESERVEMASTERYUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleMasteryChanged(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDMASTERYHANDLER_HANDLEMASTERYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDMASTERYHANDLER_ONDESTROY_OFFSET))(nullptr);
		}

	};
}

