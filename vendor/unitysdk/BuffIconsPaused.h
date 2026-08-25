#pragma once
#include "unitysdk.h"

class InclinedGridSetting;
namespace UnityEngine { class GameObject; }
class BuffIconData;
class BuffIconContent;

#define BUFFICONSPAUSED_INIT_OFFSET UNITYSDK_OFFSET(0x25D8F10)
#define BUFFICONSPAUSED_ENABLEANIMATION_OFFSET UNITYSDK_OFFSET(0x25D92C0)
#define BUFFICONSPAUSED_CLEAR_OFFSET UNITYSDK_OFFSET(0x25D94C0)
#define BUFFICONSPAUSED_ICONREORDERATTACH_OFFSET UNITYSDK_OFFSET(0x25D96E0)
#define BUFFICONSPAUSED_ICONREORDERATTACH_OFFSET UNITYSDK_OFFSET(0x25D9940)
#define BUFFICONSPAUSED_ICONREORDERATTACH_OFFSET UNITYSDK_OFFSET(0x25D9980)
#define BUFFICONSPAUSED_ICONREORDERATTACH_OFFSET UNITYSDK_OFFSET(0x25D9720)
#define BUFFICONSPAUSED_ICONREORDERDETACH_OFFSET UNITYSDK_OFFSET(0x25D9FF0)
#define BUFFICONSPAUSED_ICONREORDERDETACH_OFFSET UNITYSDK_OFFSET(0x25DA780)
#define BUFFICONSPAUSED_ICONREORDERDETACH_OFFSET UNITYSDK_OFFSET(0x25DA910)
#define BUFFICONSPAUSED_ICONREORDERDETACH_OFFSET UNITYSDK_OFFSET(0x25DA180)
#define BUFFICONSPAUSED_ICONREORDERALL_OFFSET UNITYSDK_OFFSET(0x25DAAA0)
#define BUFFICONSPAUSED_TOGGLEMOREBUFFEXIST_OFFSET UNITYSDK_OFFSET(0x25D9F10)
#define BUFFICONSPAUSED_GETIDLEICON_OFFSET UNITYSDK_OFFSET(0x25D99C0)
#define BUFFICONSPAUSED_STEALBUSYICON_OFFSET UNITYSDK_OFFSET(0x25D9B40)
#define BUFFICONSPAUSED_ICONMOVE_OFFSET UNITYSDK_OFFSET(0x25D9CE0)
#define BUFFICONSPAUSED_.CTOR_OFFSET UNITYSDK_OFFSET(0x25DB3E0)

	inline static constexpr unsigned int BuffIconsPaused_TypeDefinitionIndex = 6371;

	class BuffIconsPaused : public Il2CppObject
	{
	public:
		InclinedGridSetting* gridSetting; // 0x28
		Il2CppObject* iconUIList; // 0x38
		::UnityEngine::GameObject* OnMoreBuffExist; // 0x40

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_INIT_OFFSET))(nullptr);
		}

		::System::Void EnableAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_ENABLEANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_CLEAR_OFFSET))(nullptr);
		}

		::System::Void IconReorderAttach(::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_ICONREORDERATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void IconReorderAttach(::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_ICONREORDERATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void IconReorderAttach(::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3, ::System::UInt32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_ICONREORDERATTACH_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		BuffIconData* IconReorderAttach(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((BuffIconData*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_ICONREORDERATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IconReorderDetach(BuffIconData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(BuffIconData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_ICONREORDERDETACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IconReorderDetach(BuffIconData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(BuffIconData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_ICONREORDERDETACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IconReorderDetach(BuffIconData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(BuffIconData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_ICONREORDERDETACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IconReorderDetach(BuffIconData* arg)
		{
			((::System::Void(*)(BuffIconData*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_ICONREORDERDETACH_OFFSET))(arg, nullptr);
		}

		::System::Void IconReorderAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_ICONREORDERALL_OFFSET))(nullptr);
		}

		::System::Void ToggleMoreBuffExist()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_TOGGLEMOREBUFFEXIST_OFFSET))(nullptr);
		}

		BuffIconContent* GetIdleIcon()
		{
			return ((BuffIconContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_GETIDLEICON_OFFSET))(nullptr);
		}

		BuffIconContent* StealBusyIcon()
		{
			return ((BuffIconContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_STEALBUSYICON_OFFSET))(nullptr);
		}

		::System::Void IconMove(::System::Int32 arg, BuffIconContent* arg2)
		{
			((::System::Void(*)(::System::Int32, BuffIconContent*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_ICONMOVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSPAUSED_.CTOR_OFFSET))(nullptr);
		}

	};

