#pragma once
#include "unitysdk.h"

namespace FlatData { class OpenConditionContent; }

#define UIOPENERBASE_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x26B9EF0)
#define UIOPENERBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B9F00)
#define UIOPENERBASE_OPENUI_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIOPENERBASE_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26B9F20)
#define UIOPENERBASE_CHECKCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26B9F30)
#define UIOPENERBASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x26B9F70)
#define UIOPENERBASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x26B9FF0)
#define UIOPENERBASE_OPENUI_OFFSET UNITYSDK_OFFSET(0x26BA000)
#define UIOPENERBASE_ISLOCK_OFFSET UNITYSDK_OFFSET(0x26BA140)
#define UIOPENERBASE_OPENUI_OFFSET UNITYSDK_OFFSET(0x26BA1B0)

	inline static constexpr unsigned int UIOpenerBase_TypeDefinitionIndex = 6917;

	class UIOpenerBase : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPENERBASE_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIOPENERBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPENERBASE_OPENUI_OFFSET))(nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPENERBASE_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Boolean CheckContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPENERBASE_CHECKCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPENERBASE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPENERBASE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void OpenUI(::System::String* str, ::FlatData::OpenConditionContent* arg)
		{
			((::System::Void(*)(::System::String*, ::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPENERBASE_OPENUI_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsLock(::System::String* str, ::FlatData::OpenConditionContent* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPENERBASE_ISLOCK_OFFSET))(str, arg, nullptr);
		}

		::System::Void OpenUI(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPENERBASE_OPENUI_OFFSET))(str, nullptr);
		}

	};

