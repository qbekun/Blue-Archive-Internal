#pragma once
#include "../unitysdk.h"

#define TMPRO_TMP_OBJECTPOOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_OBJECTPOOL`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_OBJECTPOOL`1_GET_COUNTINACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_OBJECTPOOL`1_SET_COUNTALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_OBJECTPOOL`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_OBJECTPOOL`1_GET_COUNTALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_OBJECTPOOL`1_GET_COUNTACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace TMPro
{
	inline static constexpr unsigned int TMP_ObjectPool`1_TypeDefinitionIndex = 33708;

	class TMP_ObjectPool`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_Stack; // 0x0
		Il2CppObject* m_ActionOnGet; // 0x0
		Il2CppObject* m_ActionOnRelease; // 0x0
		::System::Int32 _countAll_k__BackingField; // 0x0

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OBJECTPOOL`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OBJECTPOOL`1_GET_OFFSET))(nullptr);
		}

		::System::Int32 get_countInactive()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OBJECTPOOL`1_GET_COUNTINACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_countAll(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OBJECTPOOL`1_SET_COUNTALL_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OBJECTPOOL`1_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_countAll()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OBJECTPOOL`1_GET_COUNTALL_OFFSET))(nullptr);
		}

		::System::Int32 get_countActive()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OBJECTPOOL`1_GET_COUNTACTIVE_OFFSET))(nullptr);
		}

	};
}

