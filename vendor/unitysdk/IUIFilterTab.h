#pragma once
#include "unitysdk.h"

#define IUIFILTERTAB_ISALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIFILTERTAB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIFILTERTAB_GETSELECTEDCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIFILTERTAB_SETALLVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIFILTERTAB_APPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIFILTERTAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IUIFilterTab_TypeDefinitionIndex = 8124;

	class IUIFilterTab : public Il2CppObject
	{
	public:
		::System::Boolean IsAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IUIFILTERTAB_ISALL_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IUIFILTERTAB_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetSelectedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IUIFILTERTAB_GETSELECTEDCOUNT_OFFSET))(nullptr);
		}

		::System::Void SetAllValues(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + IUIFILTERTAB_SETALLVALUES_OFFSET))(arg, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IUIFILTERTAB_APPLY_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IUIFILTERTAB_DISPOSE_OFFSET))(nullptr);
		}

	};

