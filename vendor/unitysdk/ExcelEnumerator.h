#pragma once
#include "unitysdk.h"

namespace SQLite { class SQLiteConnection; }

#define EXCELENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCELENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCELENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCELENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCELENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCELENUMERATOR_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCELENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ExcelEnumerator_TypeDefinitionIndex = 16544;

	class ExcelEnumerator : public Il2CppObject
	{
	public:
		Il2CppObject* repository; // 0x0
		::SQLite::SQLiteConnection* connection; // 0x0
		Il2CppObject* enumerator; // 0x0

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCELENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCELENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCELENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCELENUMERATOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCELENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Void Close(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EXCELENUMERATOR_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EXCELENUMERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

