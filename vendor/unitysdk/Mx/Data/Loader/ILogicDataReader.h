#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_LOADER_ILOGICDATAREADER_READTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_LOADER_ILOGICDATAREADER_READBINARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_LOADER_ILOGICDATAREADER_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_LOADER_ILOGICDATAREADER_BUILDCACHE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data::Loader
{
	inline static constexpr unsigned int ILogicDataReader_TypeDefinitionIndex = 16529;

	class ILogicDataReader : public Il2CppObject
	{
	public:
		::System::String* ReadText(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_ILOGICDATAREADER_READTEXT_OFFSET))(str, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadBinary(::System::String* str, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_ILOGICDATAREADER_READBINARY_OFFSET))(str, str, nullptr);
		}

		::System::Void ClearCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_ILOGICDATAREADER_CLEARCACHE_OFFSET))(nullptr);
		}

		::System::Void BuildCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_ILOGICDATAREADER_BUILDCACHE_OFFSET))(nullptr);
		}

	};
}

