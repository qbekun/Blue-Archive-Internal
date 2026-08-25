#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_SELECTIONCONTAINER_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCE4F0)
#define MX_MINIGAMECCG_SELECTIONCONTAINER_SET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCE500)
#define MX_MINIGAMECCG_SELECTIONCONTAINER_GET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCE510)
#define MX_MINIGAMECCG_SELECTIONCONTAINER_SET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCE520)
#define MX_MINIGAMECCG_SELECTIONCONTAINER_GET_CANDIDATES_OFFSET UNITYSDK_OFFSET(0x1DCE530)
#define MX_MINIGAMECCG_SELECTIONCONTAINER_SET_CANDIDATES_OFFSET UNITYSDK_OFFSET(0x1DCE540)
#define MX_MINIGAMECCG_SELECTIONCONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DCE550)
#define MX_MINIGAMECCG_SELECTIONCONTAINER_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DCE560)
#define MX_MINIGAMECCG_SELECTIONCONTAINER_GET_ISFIXEDTARGET_OFFSET UNITYSDK_OFFSET(0x1DCE570)
#define MX_MINIGAMECCG_SELECTIONCONTAINER_SET_ISFIXEDTARGET_OFFSET UNITYSDK_OFFSET(0x1DCE580)
#define MX_MINIGAMECCG_SELECTIONCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCDD40)
#define MX_MINIGAMECCG_SELECTIONCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCDA40)
#define MX_MINIGAMECCG_SELECTIONCONTAINER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DCE590)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int SelectionContainer_TypeDefinitionIndex = 20569;

	class SelectionContainer : public Il2CppObject
	{
	public:
		::System::Int32 _PlayerId_k__BackingField; // 0x10
		::System::Int32 _SourceEntityId_k__BackingField; // 0x14
		Il2CppObject* _Candidates_k__BackingField; // 0x18
		::System::Int32 _Count_k__BackingField; // 0x20
		::System::Boolean _IsFixedTarget_k__BackingField; // 0x24

		::System::Int32 get_PlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SELECTIONCONTAINER_GET_PLAYERID_OFFSET))(nullptr);
		}

		::System::Void set_PlayerId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SELECTIONCONTAINER_SET_PLAYERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SourceEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SELECTIONCONTAINER_GET_SOURCEENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_SourceEntityId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SELECTIONCONTAINER_SET_SOURCEENTITYID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Candidates()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SELECTIONCONTAINER_GET_CANDIDATES_OFFSET))(nullptr);
		}

		::System::Void set_Candidates(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SELECTIONCONTAINER_SET_CANDIDATES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SELECTIONCONTAINER_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SELECTIONCONTAINER_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFixedTarget()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SELECTIONCONTAINER_GET_ISFIXEDTARGET_OFFSET))(nullptr);
		}

		::System::Void set_IsFixedTarget(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SELECTIONCONTAINER_SET_ISFIXEDTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SELECTIONCONTAINER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SELECTIONCONTAINER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SELECTIONCONTAINER_INITIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

