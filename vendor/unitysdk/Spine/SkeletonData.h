#pragma once
#include "../unitysdk.h"

namespace Spine { class Skin; }
namespace Spine { class IkConstraintData; }
namespace Spine { class BoneData; }
namespace Spine { class EventData; }
namespace Spine { class SlotData; }
namespace Spine { class TransformConstraintData; }
namespace Spine { class PathConstraintData; }
namespace Spine { class PhysicsConstraintData; }
namespace Spine { class Animation; }

#define SPINE_SKELETONDATA_GET_SKINS_OFFSET UNITYSDK_OFFSET(0x95C6300)
#define SPINE_SKELETONDATA_SET_FPS_OFFSET UNITYSDK_OFFSET(0x95C6310)
#define SPINE_SKELETONDATA_SET_SKINS_OFFSET UNITYSDK_OFFSET(0x95C6320)
#define SPINE_SKELETONDATA_SET_PATHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95C6330)
#define SPINE_SKELETONDATA_FINDIKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x95C6340)
#define SPINE_SKELETONDATA_SET_X_OFFSET UNITYSDK_OFFSET(0x95C6440)
#define SPINE_SKELETONDATA_SET_HASH_OFFSET UNITYSDK_OFFSET(0x95C6450)
#define SPINE_SKELETONDATA_GET_X_OFFSET UNITYSDK_OFFSET(0x95C6470)
#define SPINE_SKELETONDATA_FINDBONE_OFFSET UNITYSDK_OFFSET(0x95C6480)
#define SPINE_SKELETONDATA_SET_TRANSFORMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95C6580)
#define SPINE_SKELETONDATA_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x95C6590)
#define SPINE_SKELETONDATA_FINDEVENT_OFFSET UNITYSDK_OFFSET(0x95C65A0)
#define SPINE_SKELETONDATA_SET_DEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0x95C67B0)
#define SPINE_SKELETONDATA_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x95C67C0)
#define SPINE_SKELETONDATA_SET_Y_OFFSET UNITYSDK_OFFSET(0x95C67D0)
#define SPINE_SKELETONDATA_FINDSLOT_OFFSET UNITYSDK_OFFSET(0x95C67E0)
#define SPINE_SKELETONDATA_SET_IKCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95C68E0)
#define SPINE_SKELETONDATA_FINDTRANSFORMCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x95C68F0)
#define SPINE_SKELETONDATA_GET_PATHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95C69F0)
#define SPINE_SKELETONDATA_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x95C6A00)
#define SPINE_SKELETONDATA_GET_PHYSICSCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95C6A10)
#define SPINE_SKELETONDATA_GET_DEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0x95C6A20)
#define SPINE_SKELETONDATA_GET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x95C6A30)
#define SPINE_SKELETONDATA_GET_IMAGESPATH_OFFSET UNITYSDK_OFFSET(0x95C6A40)
#define SPINE_SKELETONDATA_GET_FPS_OFFSET UNITYSDK_OFFSET(0x95C6A50)
#define SPINE_SKELETONDATA_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x95C6A60)
#define SPINE_SKELETONDATA_SET_REFERENCESCALE_OFFSET UNITYSDK_OFFSET(0x95C6A70)
#define SPINE_SKELETONDATA_FINDPATHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x95C6A80)
#define SPINE_SKELETONDATA_GET_HASH_OFFSET UNITYSDK_OFFSET(0x95C6B90)
#define SPINE_SKELETONDATA_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x95C6BA0)
#define SPINE_SKELETONDATA_GET_TRANSFORMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95C6BB0)
#define SPINE_SKELETONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x95C6BC0)
#define SPINE_SKELETONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x95BC160)
#define SPINE_SKELETONDATA_GET_BONES_OFFSET UNITYSDK_OFFSET(0x95C6BD0)
#define SPINE_SKELETONDATA_SET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x95C6BE0)
#define SPINE_SKELETONDATA_GET_ANIMATIONS_OFFSET UNITYSDK_OFFSET(0x95C6C00)
#define SPINE_SKELETONDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x95C6C10)
#define SPINE_SKELETONDATA_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x95C6C20)
#define SPINE_SKELETONDATA_SET_IMAGESPATH_OFFSET UNITYSDK_OFFSET(0x95C6C30)
#define SPINE_SKELETONDATA_FINDSKIN_OFFSET UNITYSDK_OFFSET(0x95C6C50)
#define SPINE_SKELETONDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95C6E60)
#define SPINE_SKELETONDATA_GET_IKCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95C6E80)
#define SPINE_SKELETONDATA_FINDPHYSICSCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x95C6E90)
#define SPINE_SKELETONDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x95C6FA0)
#define SPINE_SKELETONDATA_SET_ANIMATIONS_OFFSET UNITYSDK_OFFSET(0x95C6FB0)
#define SPINE_SKELETONDATA_SET_PHYSICSCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95C6FC0)
#define SPINE_SKELETONDATA_FINDANIMATION_OFFSET UNITYSDK_OFFSET(0x95C6FD0)
#define SPINE_SKELETONDATA_SET_EVENTS_OFFSET UNITYSDK_OFFSET(0x95C70D0)
#define SPINE_SKELETONDATA_GET_REFERENCESCALE_OFFSET UNITYSDK_OFFSET(0x95C70E0)
#define SPINE_SKELETONDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x95C70F0)
#define SPINE_SKELETONDATA_GET_Y_OFFSET UNITYSDK_OFFSET(0x95C7100)

namespace Spine
{
	inline static constexpr unsigned int SkeletonData_TypeDefinitionIndex = 35062;

	class SkeletonData : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		Il2CppObject* bones; // 0x18
		Il2CppObject* slots; // 0x20
		Il2CppObject* skins; // 0x28
		::Spine::Skin* defaultSkin; // 0x30
		Il2CppObject* events; // 0x38
		Il2CppObject* animations; // 0x40
		Il2CppObject* ikConstraints; // 0x48
		Il2CppObject* transformConstraints; // 0x50
		Il2CppObject* pathConstraints; // 0x58
		Il2CppObject* physicsConstraints; // 0x60
		::System::Single x; // 0x68
		::System::Single y; // 0x6C
		::System::Single width; // 0x70
		::System::Single height; // 0x74
		::System::Single referenceScale; // 0x78
		::System::String* version; // 0x80
		::System::String* hash; // 0x88
		::System::Single fps; // 0x90
		::System::String* imagesPath; // 0x98
		::System::String* audioPath; // 0xA0

		Il2CppObject* get_Skins()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_SKINS_OFFSET))(nullptr);
		}

		::System::Void set_Fps(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_FPS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Skins(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_SKINS_OFFSET))(arg, nullptr);
		}

		::System::Void set_PathConstraints(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_PATHCONSTRAINTS_OFFSET))(arg, nullptr);
		}

		::Spine::IkConstraintData* FindIkConstraint(::System::String* str)
		{
			return (return (::Spine::IkConstraintData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDIKCONSTRAINT_OFFSET))(str, nullptr);
		}

		::System::Void set_X(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_X_OFFSET))(arg, nullptr);
		}

		::System::Void set_Hash(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_HASH_OFFSET))(str, nullptr);
		}

		::System::Single get_X()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_X_OFFSET))(nullptr);
		}

		::Spine::BoneData* FindBone(::System::String* str)
		{
			return (return (::Spine::BoneData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDBONE_OFFSET))(str, nullptr);
		}

		::System::Void set_TransformConstraints(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_TRANSFORMCONSTRAINTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Width(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::Spine::EventData* FindEvent(::System::String* str)
		{
			return (return (::Spine::EventData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDEVENT_OFFSET))(str, nullptr);
		}

		::System::Void set_DefaultSkin(::Spine::Skin* arg)
		{
			((::System::Void(*)(::Spine::Skin*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_DEFAULTSKIN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Events()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::Void set_Y(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_Y_OFFSET))(arg, nullptr);
		}

		::Spine::SlotData* FindSlot(::System::String* str)
		{
			return (return (::Spine::SlotData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDSLOT_OFFSET))(str, nullptr);
		}

		::System::Void set_IkConstraints(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_IKCONSTRAINTS_OFFSET))(arg, nullptr);
		}

		::Spine::TransformConstraintData* FindTransformConstraint(::System::String* str)
		{
			return (return (::Spine::TransformConstraintData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDTRANSFORMCONSTRAINT_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_PathConstraints()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_PATHCONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Single get_Height()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_HEIGHT_OFFSET))(nullptr);
		}

		Il2CppObject* get_PhysicsConstraints()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_PHYSICSCONSTRAINTS_OFFSET))(nullptr);
		}

		::Spine::Skin* get_DefaultSkin()
		{
			return (return (::Spine::Skin*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_DEFAULTSKIN_OFFSET))(nullptr);
		}

		::System::String* get_AudioPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_AUDIOPATH_OFFSET))(nullptr);
		}

		::System::String* get_ImagesPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_IMAGESPATH_OFFSET))(nullptr);
		}

		::System::Single get_Fps()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_FPS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Slots()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_SLOTS_OFFSET))(nullptr);
		}

		::System::Void set_ReferenceScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_REFERENCESCALE_OFFSET))(arg, nullptr);
		}

		::Spine::PathConstraintData* FindPathConstraint(::System::String* str)
		{
			return (return (::Spine::PathConstraintData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDPATHCONSTRAINT_OFFSET))(str, nullptr);
		}

		::System::String* get_Hash()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_HASH_OFFSET))(nullptr);
		}

		::System::Void set_Height(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TransformConstraints()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_TRANSFORMCONSTRAINTS_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Bones()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_BONES_OFFSET))(nullptr);
		}

		::System::Void set_AudioPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_AUDIOPATH_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Animations()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_ANIMATIONS_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Single get_Width()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Void set_ImagesPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_IMAGESPATH_OFFSET))(str, nullptr);
		}

		::Spine::Skin* FindSkin(::System::String* str)
		{
			return (return (::Spine::Skin*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDSKIN_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* get_IkConstraints()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_IKCONSTRAINTS_OFFSET))(nullptr);
		}

		::Spine::PhysicsConstraintData* FindPhysicsConstraint(::System::String* str)
		{
			return (return (::Spine::PhysicsConstraintData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDPHYSICSCONSTRAINT_OFFSET))(str, nullptr);
		}

		::System::Void set_Version(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_VERSION_OFFSET))(str, nullptr);
		}

		::System::Void set_Animations(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_ANIMATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void set_PhysicsConstraints(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_PHYSICSCONSTRAINTS_OFFSET))(arg, nullptr);
		}

		::Spine::Animation* FindAnimation(::System::String* str)
		{
			return (return (::Spine::Animation*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDANIMATION_OFFSET))(str, nullptr);
		}

		::System::Void set_Events(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_EVENTS_OFFSET))(arg, nullptr);
		}

		::System::Single get_ReferenceScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_REFERENCESCALE_OFFSET))(nullptr);
		}

		::System::String* get_Version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Single get_Y()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_Y_OFFSET))(nullptr);
		}

	};
}

