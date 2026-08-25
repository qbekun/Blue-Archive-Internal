#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_FLATBUFFERLOGICHOLDER_CREATEFLATBUFFEROBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_FLATBUFFERLOGICHOLDER_PARSEFLATDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_FLATBUFFERLOGICHOLDER_PARSEFLATDATA_OFFSET UNITYSDK_OFFSET(0x17F87C0)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int FlatBufferLogicHolder_TypeDefinitionIndex = 15646;

	class FlatBufferLogicHolder : public Il2CppObject
	{
	public:
		Il2CppObject* CreateFlatBufferObject(::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_FLATBUFFERLOGICHOLDER_CREATEFLATBUFFEROBJECT_OFFSET))(str, str, nullptr);
		}

		Il2CppObject* ParseFlatData(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_FLATBUFFERLOGICHOLDER_PARSEFLATDATA_OFFSET))(arg, nullptr);
		}

		::System::Object* ParseFlatData(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_FLATBUFFERLOGICHOLDER_PARSEFLATDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

