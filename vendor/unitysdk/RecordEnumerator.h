#pragma once
#include "unitysdk.h"

namespace MX::Core::IO::Csv { class CsvReader; }

#define RECORDENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x103F440)
#define RECORDENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x103F4F0)
#define RECORDENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x103F610)
#define RECORDENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x103EDE0)
#define RECORDENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x103F650)
#define RECORDENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x103F660)

	inline static constexpr unsigned int RecordEnumerator_TypeDefinitionIndex = 12846;

	class RecordEnumerator : public Il2CppObject
	{
	public:
		::MX::Core::IO::Csv::CsvReader* _reader; // 0x10
		::Il2CppArray<::System::Object*>* _current; // 0x18
		::System::Int64 _currentRecordIndex; // 0x20

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORDENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORDENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORDENUMERATOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Core::IO::Csv::CsvReader* arg)
		{
			((::System::Void(*)(::MX::Core::IO::Csv::CsvReader*, ::PVOID))((::PBYTE)hIl2Cpp + RECORDENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Current()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORDENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORDENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

