#pragma once
#include "unitysdk.h"

#define UNITYSAFEFINDHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92ED6E0)
#define UNITYSAFEFINDHANDLE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x92ED720)
#define UNITYSAFEFINDHANDLE_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x92ED730)
#define UNITYSAFEFINDHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92ED780)

	inline static constexpr unsigned int UnitySafeFindHandle_TypeDefinitionIndex = 25220;

	class UnitySafeFindHandle : public Il2CppObject
	{
	public:
		::System::Int32 m_Handle; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYSAFEFINDHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Handle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYSAFEFINDHANDLE_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInvalid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYSAFEFINDHANDLE_GET_ISINVALID_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYSAFEFINDHANDLE_DISPOSE_OFFSET))(arg, nullptr);
		}

	};

