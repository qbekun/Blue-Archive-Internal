#pragma once
#include "../../../unitysdk.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_TAGID_OFFSET UNITYSDK_OFFSET(0x904C460)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_SETDATA_OFFSET UNITYSDK_OFFSET(0x904C470)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_MODIFICATIONTIME_OFFSET UNITYSDK_OFFSET(0x904CB10)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_INCLUDE_OFFSET UNITYSDK_OFFSET(0x904CB20)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x904CB30)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ExtendedUnixData_TypeDefinitionIndex = 37116;

	class ExtendedUnixData : public Il2CppObject
	{
	public:
		Flags* _flags; // 0x10
		::System::DateTime* _modificationTime; // 0x18
		::System::DateTime* _lastAccessTime; // 0x20
		::System::DateTime* _createTime; // 0x28

		::System::Int16 get_TagID()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_TAGID_OFFSET))(nullptr);
		}

		::System::Void SetData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_SETDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::DateTime* get_ModificationTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_MODIFICATIONTIME_OFFSET))(nullptr);
		}

		Flags* get_Include()
		{
			return (return (Flags*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_INCLUDE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

