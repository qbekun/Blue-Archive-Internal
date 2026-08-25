#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_SETDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_PUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_POP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_PEEK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_CURRENTITEM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextProcessingStack`1_TypeDefinitionIndex = 35607;

	class TextProcessingStack`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* itemStack; // 0x0
		::System::Int32 index; // 0x0
		Il2CppObject* m_DefaultItem; // 0x0
		::System::Int32 m_Capacity; // 0x0
		::System::Int32 m_RolloverSize; // 0x0
		::System::Int32 m_Count; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Void SetDefault(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_SETDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_ADD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Remove()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_REMOVE_OFFSET))(nullptr);
		}

		::System::Void Push(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_PUSH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Pop()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_POP_OFFSET))(nullptr);
		}

		Il2CppObject* Peek()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_PEEK_OFFSET))(nullptr);
		}

		Il2CppObject* CurrentItem()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTPROCESSINGSTACK`1_CURRENTITEM_OFFSET))(nullptr);
		}

	};
}

