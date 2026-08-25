#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GUILayoutGroup; }
namespace UnityEngineInternal { class GenericStack; }

#define LAYOUTCACHE_SET_ID_OFFSET UNITYSDK_OFFSET(0xA27E8B0)
#define LAYOUTCACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA27D560)
#define LAYOUTCACHE_RESETCURSOR_OFFSET UNITYSDK_OFFSET(0xA27E8C0)

	inline static constexpr unsigned int LayoutCache_TypeDefinitionIndex = 36541;

	class LayoutCache : public Il2CppObject
	{
	public:
		::System::Int32 _id_k__BackingField; // 0x10
		::UnityEngine::GUILayoutGroup* topLevel; // 0x18
		::UnityEngineInternal::GenericStack* layoutGroups; // 0x20
		::UnityEngine::GUILayoutGroup* windows; // 0x28

		::System::Void set_id(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LAYOUTCACHE_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LAYOUTCACHE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ResetCursor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTCACHE_RESETCURSOR_OFFSET))(nullptr);
		}

	};

