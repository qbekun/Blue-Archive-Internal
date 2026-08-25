#pragma once
#include "../unitysdk.h"

#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_GET_ROLLOVERSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_SET_ROLLOVERSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_SETDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_SETDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_PUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_POP_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_PEEK_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_CURRENTITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTPROCESSINGSTACK`1_PREVIOUSITEM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextProcessingStack`1_TypeDefinitionIndex = 33755;

	class TMP_TextProcessingStack`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* itemStack; // 0x0
		::System::Int32 index; // 0x0
		Il2CppObject* m_DefaultItem; // 0x0
		::System::Int32 m_Capacity; // 0x0
		::System::Int32 m_RolloverSize; // 0x0
		::System::Int32 m_Count; // 0x0
		::System::Int32 k_DefaultCapacity; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_rolloverSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_GET_ROLLOVERSIZE_OFFSET))(nullptr);
		}

		::System::Void set_rolloverSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_SET_ROLLOVERSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefault(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_SETDEFAULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Void SetDefault(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_SETDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_ADD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Remove()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_REMOVE_OFFSET))(nullptr);
		}

		::System::Void Push(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_PUSH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Pop()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_POP_OFFSET))(nullptr);
		}

		Il2CppObject* Peek()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_PEEK_OFFSET))(nullptr);
		}

		Il2CppObject* CurrentItem()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_CURRENTITEM_OFFSET))(nullptr);
		}

		Il2CppObject* PreviousItem()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPROCESSINGSTACK`1_PREVIOUSITEM_OFFSET))(nullptr);
		}

	};
}

