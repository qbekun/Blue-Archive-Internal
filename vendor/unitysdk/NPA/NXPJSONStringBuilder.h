#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPJSONStringBuilder; }
namespace NPA { class NXPObject; }

#define NPA_NXPJSONSTRINGBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBB230)
#define NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x9BC47F0)
#define NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x9BBBC70)
#define NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x9BBC380)
#define NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x9BC4E20)
#define NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x9BBBDE0)
#define NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x9BBBFF0)
#define NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x9BBB2D0)
#define NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x9BC51B0)
#define NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x9BBB410)
#define NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPJSONSTRINGBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BC5300)
#define NPA_NXPJSONSTRINGBUILDER_APPENDKEY_OFFSET UNITYSDK_OFFSET(0x9BC4B90)
#define NPA_NXPJSONSTRINGBUILDER_APPENDCOMMMAIFNOTFIRSTELEMENT_OFFSET UNITYSDK_OFFSET(0x9BC4B00)
#define NPA_NXPJSONSTRINGBUILDER_ISNULL_OFFSET UNITYSDK_OFFSET(0x9BC4AF0)
#define NPA_NXPJSONSTRINGBUILDER_DICTIONARYTOJSONSTRING_OFFSET UNITYSDK_OFFSET(0x9BC4F40)
#define NPA_NXPJSONSTRINGBUILDER_ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x9BC4C20)

namespace NPA
{
	inline static constexpr unsigned int NXPJSONStringBuilder_TypeDefinitionIndex = 25588;

	class NXPJSONStringBuilder : public Il2CppObject
	{
	public:
		::System::String* OPEN_BRACKET; // 0x0
		::System::String* CLOSE_BRACKET; // 0x0
		::System::Text::StringBuilder* builder; // 0x10
		::System::Boolean didSetCloseBracket; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::NXPJSONStringBuilder* append(::System::String* str, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::NPA::NXPJSONStringBuilder*(*)(::System::String*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET))(str, arg, arg, nullptr);
		}

		::NPA::NXPJSONStringBuilder* append(::System::String* str, ::System::String* str)
		{
			return (return (::NPA::NXPJSONStringBuilder*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET))(str, str, nullptr);
		}

		::NPA::NXPJSONStringBuilder* append(::System::String* str, ::System::Int32 arg)
		{
			return (return (::NPA::NXPJSONStringBuilder*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET))(str, arg, nullptr);
		}

		::NPA::NXPJSONStringBuilder* append(::System::String* str, ::System::Int64 arg)
		{
			return (return (::NPA::NXPJSONStringBuilder*(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET))(str, arg, nullptr);
		}

		::NPA::NXPJSONStringBuilder* append(::System::String* str, ::System::Boolean arg)
		{
			return (return (::NPA::NXPJSONStringBuilder*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET))(str, arg, nullptr);
		}

		::NPA::NXPJSONStringBuilder* append(::System::String* str, Il2CppObject* arg)
		{
			return (return (::NPA::NXPJSONStringBuilder*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET))(str, arg, nullptr);
		}

		::NPA::NXPJSONStringBuilder* append(::System::String* str, ::NPA::NXPObject* arg)
		{
			return (return (::NPA::NXPJSONStringBuilder*(*)(::System::String*, ::NPA::NXPObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET))(str, arg, nullptr);
		}

		::NPA::NXPJSONStringBuilder* append(::System::String* str, ::System::Object* arg)
		{
			return (return (::NPA::NXPJSONStringBuilder*(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET))(str, arg, nullptr);
		}

		::NPA::NXPJSONStringBuilder* append(::System::String* str, Il2CppObject* arg)
		{
			return (return (::NPA::NXPJSONStringBuilder*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET))(str, arg, nullptr);
		}

		::NPA::NXPJSONStringBuilder* append(::System::String* str, Il2CppObject* arg)
		{
			return (return (::NPA::NXPJSONStringBuilder*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_APPEND_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void appendKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_APPENDKEY_OFFSET))(str, nullptr);
		}

		::System::Void appendCommmaIfNotFirstElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_APPENDCOMMMAIFNOTFIRSTELEMENT_OFFSET))(nullptr);
		}

		::System::Boolean isNull(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_ISNULL_OFFSET))(arg, nullptr);
		}

		::System::String* dictionaryToJsonString(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_DICTIONARYTOJSONSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* escapeString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPJSONSTRINGBUILDER_ESCAPESTRING_OFFSET))(str, nullptr);
		}

	};
}

