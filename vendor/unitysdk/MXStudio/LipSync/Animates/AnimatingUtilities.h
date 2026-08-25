#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::Commons { class MouthShape; }

#define MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_CLAMP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_ISVOWEL_OFFSET UNITYSDK_OFFSET(0x9439C60)
#define MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_ISVOWEL_OFFSET UNITYSDK_OFFSET(0x9439CB0)
#define MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_CONVERTTOTARGETSHAPESET_OFFSET UNITYSDK_OFFSET(0x9439D20)
#define MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_CONVERTTOTARGETSHAPESET_OFFSET UNITYSDK_OFFSET(0x943A0A0)
#define MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_GETRELAXEDMOUTHSHAPE_OFFSET UNITYSDK_OFFSET(0x943A270)
#define MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_ISLARGERTHAN_OFFSET UNITYSDK_OFFSET(0x943A2E0)
#define MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_PAIRWISE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_TRIWISE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_TOHASHSET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXStudio::LipSync::Animates
{
	inline static constexpr unsigned int AnimatingUtilities_TypeDefinitionIndex = 36867;

	class AnimatingUtilities : public Il2CppObject
	{
	public:
		Il2CppObject* Clamp(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsVowel(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_ISVOWEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVowel(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_ISVOWEL_OFFSET))(str, nullptr);
		}

		Il2CppObject* ConvertToTargetShapeSet(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_CONVERTTOTARGETSHAPESET_OFFSET))(arg, arg, nullptr);
		}

		::MXStudio::LipSync::Commons::MouthShape* ConvertToTargetShapeSet(::MXStudio::LipSync::Commons::MouthShape* arg, Il2CppObject* arg)
		{
			return (return (::MXStudio::LipSync::Commons::MouthShape*(*)(::MXStudio::LipSync::Commons::MouthShape*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_CONVERTTOTARGETSHAPESET_OFFSET))(arg, arg, nullptr);
		}

		::MXStudio::LipSync::Commons::MouthShape* GetRelaxedMouthShape(::MXStudio::LipSync::Commons::MouthShape* arg)
		{
			return (return (::MXStudio::LipSync::Commons::MouthShape*(*)(::MXStudio::LipSync::Commons::MouthShape*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_GETRELAXEDMOUTHSHAPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLargerThan(::MXStudio::LipSync::Commons::MouthShape* arg, ::MXStudio::LipSync::Commons::MouthShape* arg)
		{
			return (return (::System::Boolean(*)(::MXStudio::LipSync::Commons::MouthShape*, ::MXStudio::LipSync::Commons::MouthShape*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_ISLARGERTHAN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Pairwise(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_PAIRWISE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Triwise(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_TRIWISE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ToHashSet(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ANIMATINGUTILITIES_TOHASHSET_OFFSET))(arg, nullptr);
		}

	};
}

