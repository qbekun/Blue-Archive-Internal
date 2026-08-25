#pragma once
#include "../../../unitysdk.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9050320)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_GET_CODEPAGE_OFFSET UNITYSDK_OFFSET(0x9050450)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_GET_SYSTEMDEFAULTCODEPAGE_OFFSET UNITYSDK_OFFSET(0x9050510)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_GET_USEUNICODE_OFFSET UNITYSDK_OFFSET(0x904B1A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_ENCODINGFROMFLAG_OFFSET UNITYSDK_OFFSET(0x9050560)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_CONVERTTOSTRINGEXT_OFFSET UNITYSDK_OFFSET(0x9050660)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_CONVERTTOSTRINGEXT_OFFSET UNITYSDK_OFFSET(0x904E050)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_CONVERTTOARRAY_OFFSET UNITYSDK_OFFSET(0x904F0C0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipStrings_TypeDefinitionIndex = 37121;

	class ZipStrings : public Il2CppObject
	{
	public:
		::System::Int32 codePage; // 0x0
		::System::Int32 _SystemDefaultCodePage_k__BackingField; // 0x4

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_CodePage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_GET_CODEPAGE_OFFSET))(nullptr);
		}

		::System::Int32 get_SystemDefaultCodePage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_GET_SYSTEMDEFAULTCODEPAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_UseUnicode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_GET_USEUNICODE_OFFSET))(nullptr);
		}

		::System::Text::Encoding* EncodingFromFlag(::System::Int32 arg)
		{
			return (return (::System::Text::Encoding*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_ENCODINGFROMFLAG_OFFSET))(arg, nullptr);
		}

		::System::String* ConvertToStringExt(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_CONVERTTOSTRINGEXT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ConvertToStringExt(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_CONVERTTOSTRINGEXT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ConvertToArray(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPSTRINGS_CONVERTTOARRAY_OFFSET))(str, nullptr);
		}

	};
}

