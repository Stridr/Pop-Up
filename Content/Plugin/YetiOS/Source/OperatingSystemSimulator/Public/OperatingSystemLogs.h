// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#define CURRENT_CLASS											(FString(__FUNCTION__).Left(FString(__FUNCTION__).Find(TEXT(":"))) )
#define CURRENT_CLASS_FUNCTION									(FString(__FUNCTION__))
#define CURRENT_FUNCTION										(FString(__FUNCTION__).Right(FString(__FUNCTION__).Len() - FString(__FUNCTION__).Find(TEXT("::")) - 1 ))
#define CURRENT_LINE_NUMBER										(FString::FromInt(__LINE__))
#define CURRENT_CLASS_WITH_LINE									("(" + CURRENT_LINE_NUMBER + ") " + CURRENT_CLASS)
#define CURRENT_FUNCTION_SIGNATURE								(FString(__FUNCSIG__))

#define DEFINE_OS_LOG(LogCategory)								DEFINE_LOG_CATEGORY_STATIC(LogOperatingSystem##LogCategory, All, All)

#define OS_LOG_Impl(LogCategory, Verbosity, Param1)				UE_LOG(LogOperatingSystem##LogCategory, Verbosity, TEXT("[%s::%s] %s"), *CURRENT_CLASS, *CURRENT_FUNCTION, *FString(Param1))
#define OS_CLOG_Impl(Cond, LogCategory, Verbosity, Param1)		UE_CLOG(Cond, LogOperatingSystem##LogCategory, Verbosity, TEXT("[%s::%s] %s"), *CURRENT_CLASS, *CURRENT_FUNCTION, *FString(Param1))

#define OS_LOG(LogCategory, Param1)								OS_LOG_Impl(LogCategory, Log, Param1)
#define OS_LOG_WARN(LogCategory, Param1)						OS_LOG_Impl(LogCategory, Warning, Param1)
#define OS_LOG_ERROR(LogCategory, Param1)						OS_LOG_Impl(LogCategory, Error, Param1)
#define OS_LOG_VERBOSE(LogCategory, Param1)						OS_LOG_Impl(LogCategory, Verbose, Param1)
#define OS_LOG_VERY_VERBOSE(LogCategory, Param1)				OS_LOG_Impl(LogCategory, VeryVerbose, Param1)
#define OS_LOG_FATAL(LogCategory, Param1)						OS_LOG_Impl(LogCategory, Fatal, Param1)

#define OS_CLOG(LogCategory, Cond, Param1)						OS_CLOG_Impl(Cond, LogCategory, Log, Param1)
#define OS_CLOG_WARN(LogCategory, Cond, Param1)					OS_CLOG_Impl(Cond, LogCategory, Warning, Param1)
#define OS_CLOG_ERROR(LogCategory, Cond, Param1)				OS_CLOG_Impl(Cond, LogCategory, Error, Param1)
#define OS_CLOG_VERBOSE(LogCategory, Cond, Param1)				OS_CLOG_Impl(Cond, LogCategory, Verbose, Param1)
#define OS_CLOG_VERY_VERBOSE(LogCategory, Cond, Param1)			OS_CLOG_Impl(Cond, LogCategory, VeryVerbose, Param1)
#define OS_CLOG_FATAL(LogCategory, Cond, Param1)				OS_CLOG_Impl(Cond, LogCategory, Fatal, Param1)
