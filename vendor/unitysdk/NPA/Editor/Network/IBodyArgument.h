#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_IBODYARGUMENT_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_IBODYARGUMENT_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_IBODYARGUMENT_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_IBODYARGUMENT_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_IBODYARGUMENT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_IBODYARGUMENT_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int IBodyArgument_TypeDefinitionIndex = 26690;

	class IBodyArgument : public Il2CppObject
	{
	public:
		::System::Void Add(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_IBODYARGUMENT_ADD_OFFSET))(str, str, nullptr);
		}

		::System::Void Add(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_IBODYARGUMENT_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_IBODYARGUMENT_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_IBODYARGUMENT_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::String* Serialize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_IBODYARGUMENT_SERIALIZE_OFFSET))(nullptr);
		}

		::System::Int32 Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_IBODYARGUMENT_COUNT_OFFSET))(nullptr);
		}

	};
}

