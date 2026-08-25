#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_UNITYTASK_SERIALIZABLEDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SERIALIZABLEDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SERIALIZABLEDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SERIALIZABLEDICTIONARY`2_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SERIALIZABLEDICTIONARY`2_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int SerializableDictionary`2_TypeDefinitionIndex = 36857;

	class SerializableDictionary`2 : public Fixup
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SERIALIZABLEDICTIONARY`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SERIALIZABLEDICTIONARY`2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SERIALIZABLEDICTIONARY`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetValue(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SERIALIZABLEDICTIONARY`2_GETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SERIALIZABLEDICTIONARY`2_SETVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

