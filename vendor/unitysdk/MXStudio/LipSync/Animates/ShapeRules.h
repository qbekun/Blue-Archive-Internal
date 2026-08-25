#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES_GETSHAPERULES_OFFSET UNITYSDK_OFFSET(0x943AD20)
#define MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES__GETPOSSIBLEMOUTHSHAPESETS_G__PLOSIVE|5_2_OFFSET UNITYSDK_OFFSET(0x943F9D0)
#define MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES_GETMOUTHSHAPERULE_OFFSET UNITYSDK_OFFSET(0x943F8E0)
#define MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES_GETPOSSIBLEMOUTHSHAPESETS_OFFSET UNITYSDK_OFFSET(0x943FC20)
#define MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES__GETPOSSIBLEMOUTHSHAPESETS_G__SINGLE|5_0_OFFSET UNITYSDK_OFFSET(0x9440AD0)
#define MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES__GETPOSSIBLEMOUTHSHAPESETS_G__LIKE|5_3_OFFSET UNITYSDK_OFFSET(0x9440DB0)
#define MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES__GETPOSSIBLEMOUTHSHAPESETS_G__DIPHTHONG|5_1_OFFSET UNITYSDK_OFFSET(0x9440B90)

namespace MXStudio::LipSync::Animates
{
	inline static constexpr unsigned int ShapeRules_TypeDefinitionIndex = 36878;

	class ShapeRules : public Il2CppObject
	{
	public:
		::System::Double diphthongBlendRate; // 0x0
		::System::Int32 minPlosiveOcclusion; // 0x0
		::System::Int32 maxPlosiveOcclusion; // 0x0

		Il2CppObject* GetShapeRules(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES_GETSHAPERULES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* _GetPossibleMouthShapeSets_g__plosive|5_2(Il2CppObject* arg, Il2CppObject* arg, <>c__DisplayClass5_0&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, <>c__DisplayClass5_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES__GETPOSSIBLEMOUTHSHAPESETS_G__PLOSIVE|5_2_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetMouthShapeRule(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES_GETMOUTHSHAPERULE_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* GetPossibleMouthShapeSets(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES_GETPOSSIBLEMOUTHSHAPESETS_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* _GetPossibleMouthShapeSets_g__single|5_0(Il2CppObject* arg, <>c__DisplayClass5_0&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, <>c__DisplayClass5_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES__GETPOSSIBLEMOUTHSHAPESETS_G__SINGLE|5_0_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* _GetPossibleMouthShapeSets_g__like|5_3(::System::String* str, <>c__DisplayClass5_0&* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, <>c__DisplayClass5_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES__GETPOSSIBLEMOUTHSHAPESETS_G__LIKE|5_3_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* _GetPossibleMouthShapeSets_g__diphthong|5_1(Il2CppObject* arg, Il2CppObject* arg, <>c__DisplayClass5_0&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, <>c__DisplayClass5_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_SHAPERULES__GETPOSSIBLEMOUTHSHAPESETS_G__DIPHTHONG|5_1_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

