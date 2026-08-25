#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_LOADER_RAWFILELOGICDATAREADER_GET__DATAROOT_OFFSET UNITYSDK_OFFSET(0x1983B20)
#define MX_DATA_LOADER_RAWFILELOGICDATAREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1983B30)
#define MX_DATA_LOADER_RAWFILELOGICDATAREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1983B60)
#define MX_DATA_LOADER_RAWFILELOGICDATAREADER_BUILDCACHE_OFFSET UNITYSDK_OFFSET(0x1983C60)
#define MX_DATA_LOADER_RAWFILELOGICDATAREADER_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1983C70)
#define MX_DATA_LOADER_RAWFILELOGICDATAREADER_READBINARY_OFFSET UNITYSDK_OFFSET(0x1983C80)
#define MX_DATA_LOADER_RAWFILELOGICDATAREADER_READBINARY_OFFSET UNITYSDK_OFFSET(0x1983E90)
#define MX_DATA_LOADER_RAWFILELOGICDATAREADER_READTEXT_OFFSET UNITYSDK_OFFSET(0x1983EC0)
#define MX_DATA_LOADER_RAWFILELOGICDATAREADER_READTEXT_OFFSET UNITYSDK_OFFSET(0x1983FB0)
#define MX_DATA_LOADER_RAWFILELOGICDATAREADER_COMBINEFILENAME_OFFSET UNITYSDK_OFFSET(0x1983E10)

namespace MX::Data::Loader
{
	inline static constexpr unsigned int RawFileLogicDataReader_TypeDefinitionIndex = 16530;

	class RawFileLogicDataReader : public Il2CppObject
	{
	public:
		::System::String* __dataRoot_k__BackingField; // 0x10

		::System::String* get__dataRoot()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_RAWFILELOGICDATAREADER_GET__DATAROOT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_RAWFILELOGICDATAREADER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_RAWFILELOGICDATAREADER_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void BuildCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_RAWFILELOGICDATAREADER_BUILDCACHE_OFFSET))(nullptr);
		}

		::System::Void ClearCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_RAWFILELOGICDATAREADER_CLEARCACHE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadBinary(::System::String* str, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_RAWFILELOGICDATAREADER_READBINARY_OFFSET))(str, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadBinary(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_RAWFILELOGICDATAREADER_READBINARY_OFFSET))(str, nullptr);
		}

		::System::String* ReadText(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_RAWFILELOGICDATAREADER_READTEXT_OFFSET))(str, str, nullptr);
		}

		::System::String* ReadText(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_RAWFILELOGICDATAREADER_READTEXT_OFFSET))(str, nullptr);
		}

		::System::String* CombineFileName(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADER_RAWFILELOGICDATAREADER_COMBINEFILENAME_OFFSET))(str, str, nullptr);
		}

	};
}

