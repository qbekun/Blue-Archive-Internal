#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_ADDRESSABLEASSETS_UTILITY_SERIALIZATIONUTILITIES_WRITEOBJECTTOBYTELIST_OFFSET UNITYSDK_OFFSET(0x9E10C00)
#define UNITYENGINE_ADDRESSABLEASSETS_UTILITY_SERIALIZATIONUTILITIES_WRITEINT32TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x9E116A0)
#define UNITYENGINE_ADDRESSABLEASSETS_UTILITY_SERIALIZATIONUTILITIES_READOBJECTFROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x9E11710)
#define UNITYENGINE_ADDRESSABLEASSETS_UTILITY_SERIALIZATIONUTILITIES_READINT32FROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x9E11C70)

namespace UnityEngine::AddressableAssets::Utility
{
	inline static constexpr unsigned int SerializationUtilities_TypeDefinitionIndex = 36214;

	class SerializationUtilities : public Il2CppObject
	{
	public:
		::System::Int32 WriteObjectToByteList(::System::Object* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UTILITY_SERIALIZATIONUTILITIES_WRITEOBJECTTOBYTELIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 WriteInt32ToByteArray(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UTILITY_SERIALIZATIONUTILITIES_WRITEINT32TOBYTEARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadObjectFromByteArray(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UTILITY_SERIALIZATIONUTILITIES_READOBJECTFROMBYTEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ReadInt32FromByteArray(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UTILITY_SERIALIZATIONUTILITIES_READINT32FROMBYTEARRAY_OFFSET))(arg, arg, nullptr);
		}

	};
}

