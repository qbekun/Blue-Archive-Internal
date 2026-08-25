#pragma once
#include "../../../unitysdk.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ITAGGEDDATA_GET_TAGID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ITAGGEDDATA_SETDATA_OFFSET UNITYSDK_OFFSET(0x000000)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ITaggedData_TypeDefinitionIndex = 37114;

	class ITaggedData : public Il2CppObject
	{
	public:
		::System::Int16 get_TagID()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ITAGGEDDATA_GET_TAGID_OFFSET))(nullptr);
		}

		::System::Void SetData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ITAGGEDDATA_SETDATA_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

