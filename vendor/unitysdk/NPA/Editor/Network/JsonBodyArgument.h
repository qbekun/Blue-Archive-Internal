#pragma once
#include "../../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_NETWORK_JSONBODYARGUMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C20000)
#define NPA_EDITOR_NETWORK_JSONBODYARGUMENT_ADD_OFFSET UNITYSDK_OFFSET(0x9C21A00)
#define NPA_EDITOR_NETWORK_JSONBODYARGUMENT_ADD_OFFSET UNITYSDK_OFFSET(0x9C20070)
#define NPA_EDITOR_NETWORK_JSONBODYARGUMENT_ADD_OFFSET UNITYSDK_OFFSET(0x9C25D10)
#define NPA_EDITOR_NETWORK_JSONBODYARGUMENT_ADD_OFFSET UNITYSDK_OFFSET(0x9C22990)
#define NPA_EDITOR_NETWORK_JSONBODYARGUMENT_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_JSONBODYARGUMENT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9C25D60)
#define NPA_EDITOR_NETWORK_JSONBODYARGUMENT_COUNT_OFFSET UNITYSDK_OFFSET(0x9C25D90)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int JsonBodyArgument_TypeDefinitionIndex = 26691;

	class JsonBodyArgument : public Il2CppObject
	{
	public:
		::NPA::SimpleJSON::JSONNode* _jsonNode; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_JSONBODYARGUMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_JSONBODYARGUMENT_ADD_OFFSET))(str, str, nullptr);
		}

		::System::Void Add(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_JSONBODYARGUMENT_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_JSONBODYARGUMENT_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_JSONBODYARGUMENT_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_JSONBODYARGUMENT_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::String* Serialize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_JSONBODYARGUMENT_SERIALIZE_OFFSET))(nullptr);
		}

		::System::Int32 Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_JSONBODYARGUMENT_COUNT_OFFSET))(nullptr);
		}

	};
}

