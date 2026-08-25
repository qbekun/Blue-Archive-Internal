#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine { class SpriteSortPoint; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Bounds&; }

#define UNITYENGINE_SPRITEMASK_GET_FRONTSORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xA2A61D0)
#define UNITYENGINE_SPRITEMASK_SET_FRONTSORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xA2A6210)
#define UNITYENGINE_SPRITEMASK_GET_FRONTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA2A6250)
#define UNITYENGINE_SPRITEMASK_SET_FRONTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA2A6290)
#define UNITYENGINE_SPRITEMASK_GET_BACKSORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xA2A62D0)
#define UNITYENGINE_SPRITEMASK_SET_BACKSORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xA2A6310)
#define UNITYENGINE_SPRITEMASK_GET_BACKSORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA2A6350)
#define UNITYENGINE_SPRITEMASK_SET_BACKSORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA2A6390)
#define UNITYENGINE_SPRITEMASK_GET_ALPHACUTOFF_OFFSET UNITYSDK_OFFSET(0xA2A63D0)
#define UNITYENGINE_SPRITEMASK_SET_ALPHACUTOFF_OFFSET UNITYSDK_OFFSET(0xA2A6410)
#define UNITYENGINE_SPRITEMASK_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0xA2A6460)
#define UNITYENGINE_SPRITEMASK_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0xA2A64A0)
#define UNITYENGINE_SPRITEMASK_GET_ISCUSTOMRANGEACTIVE_OFFSET UNITYSDK_OFFSET(0xA2A64E0)
#define UNITYENGINE_SPRITEMASK_SET_ISCUSTOMRANGEACTIVE_OFFSET UNITYSDK_OFFSET(0xA2A6520)
#define UNITYENGINE_SPRITEMASK_GET_SPRITESORTPOINT_OFFSET UNITYSDK_OFFSET(0xA2A6560)
#define UNITYENGINE_SPRITEMASK_SET_SPRITESORTPOINT_OFFSET UNITYSDK_OFFSET(0xA2A65A0)
#define UNITYENGINE_SPRITEMASK_GETSPRITEBOUNDS_OFFSET UNITYSDK_OFFSET(0xA2A65E0)
#define UNITYENGINE_SPRITEMASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A6690)
#define UNITYENGINE_SPRITEMASK_GETSPRITEBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A6650)

namespace UnityEngine
{
	inline static constexpr unsigned int SpriteMask_TypeDefinitionIndex = 38044;

	class SpriteMask : public Il2CppObject
	{
	public:
		::System::Int32 get_frontSortingLayerID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_FRONTSORTINGLAYERID_OFFSET))(nullptr);
		}

		::System::Void set_frontSortingLayerID(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_FRONTSORTINGLAYERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_frontSortingOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_FRONTSORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void set_frontSortingOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_FRONTSORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_backSortingLayerID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_BACKSORTINGLAYERID_OFFSET))(nullptr);
		}

		::System::Void set_backSortingLayerID(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_BACKSORTINGLAYERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_backSortingOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_BACKSORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void set_backSortingOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_BACKSORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Single get_alphaCutoff()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_ALPHACUTOFF_OFFSET))(nullptr);
		}

		::System::Void set_alphaCutoff(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_ALPHACUTOFF_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Sprite* get_sprite()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_SPRITE_OFFSET))(nullptr);
		}

		::System::Void set_sprite(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_SPRITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isCustomRangeActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_ISCUSTOMRANGEACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_isCustomRangeActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_ISCUSTOMRANGEACTIVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::SpriteSortPoint* get_spriteSortPoint()
		{
			return (return (::UnityEngine::SpriteSortPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_SPRITESORTPOINT_OFFSET))(nullptr);
		}

		::System::Void set_spriteSortPoint(::UnityEngine::SpriteSortPoint* arg)
		{
			((::System::Void(*)(::UnityEngine::SpriteSortPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_SPRITESORTPOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Bounds* GetSpriteBounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GETSPRITEBOUNDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GetSpriteBounds_Injected(::UnityEngine::Bounds&* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GETSPRITEBOUNDS_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

